/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@class MSASAlbum, NSString;

@interface MSASPersonModelItem : NSObject <NSCopying> {

	int _errorCount;
	MSASAlbum* _album;
	NSString* _albumGUID;
	id<NSObject> _object;

}

@property (assign,nonatomic) int errorCount;                    //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;                 //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;              //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) id<NSObject> object;               //@synthesize object=_object - In the implementation block
-(id<NSObject>)object;
-(void)setObject:(id<NSObject>)arg1 ;
-(NSString *)albumGUID;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(MSASAlbum *)album;
-(int)errorCount;
-(void)setErrorCount:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAlbumGUID:(NSString *)arg1 ;
@end

