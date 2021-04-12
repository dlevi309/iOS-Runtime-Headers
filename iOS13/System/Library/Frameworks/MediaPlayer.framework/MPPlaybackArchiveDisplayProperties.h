/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSMutableDictionary;

@interface MPPlaybackArchiveDisplayProperties : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSData* _artworkImageData;
	NSMutableDictionary* _storage;

}

@property (nonatomic,retain) NSMutableDictionary * storage;                 //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSData * artworkImageData;              //@synthesize artworkImageData=_artworkImageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSMutableDictionary *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(NSString *)subtitle;
-(id)copyWithOptions:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 artworkImageData:(id)arg3 ;
-(NSData *)artworkImageData;
@end

