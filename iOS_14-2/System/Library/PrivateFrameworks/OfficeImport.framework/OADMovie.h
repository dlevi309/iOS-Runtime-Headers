/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADMovie : OCDDelayedMedia {

	NSData* mData;
	NSString* mName;
	float mStart;
	float mEnd;
	BOOL mIsAudioOnly;
	BOOL loop;

}

@property (retain) NSData * data; 
@property (retain) NSString * name; 
@property (assign) BOOL isAudioOnly; 
@property (assign) BOOL loop; 
@property (assign) float movieStartPoint; 
@property (assign) float movieEndPoint; 
-(BOOL)loop;
-(void)setData:(NSData *)arg1 ;
-(NSString *)name;
-(id)description;
-(NSData *)data;
-(BOOL)isAudioOnly;
-(void)setName:(NSString *)arg1 ;
-(void)setLoop:(BOOL)arg1 ;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(float)movieStartPoint;
-(void)setMovieStartPoint:(float)arg1 ;
-(float)movieEndPoint;
-(void)setMovieEndPoint:(float)arg1 ;
@end

