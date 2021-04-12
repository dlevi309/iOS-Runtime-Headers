/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(BOOL)loop;
-(void)setLoop:(BOOL)arg1 ;
-(BOOL)isAudioOnly;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(float)movieStartPoint;
-(void)setMovieStartPoint:(float)arg1 ;
-(float)movieEndPoint;
-(void)setMovieEndPoint:(float)arg1 ;
@end

