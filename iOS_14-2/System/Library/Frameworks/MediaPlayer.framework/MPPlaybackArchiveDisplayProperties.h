/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)storage;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)artworkImageData;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 artworkImageData:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithOptions:(unsigned long long)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

