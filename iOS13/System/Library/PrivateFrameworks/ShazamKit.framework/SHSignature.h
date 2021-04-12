/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAudioTime, NSArray, NSUUID, NSDate, SHSignatureChunk;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying> {

	AVAudioTime* _time;
	NSArray* _chunks;
	NSUUID* _ID;
	NSDate* _sessionStartDate;

}

@property (nonatomic,readonly) NSArray * chunks;                          //@synthesize chunks=_chunks - In the implementation block
@property (nonatomic,readonly) NSUUID * ID;                               //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) AVAudioTime * time;                          //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSDate * sessionStartDate;                   //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,readonly) SHSignatureChunk * bestChunk; 
@property (nonatomic,readonly) double length; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(double)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AVAudioTime *)time;
-(void)setTime:(AVAudioTime *)arg1 ;
-(NSUUID *)ID;
-(NSDate *)sessionStartDate;
-(void)setSessionStartDate:(NSDate *)arg1 ;
-(SHSignatureChunk *)bestChunk;
-(id)initWithID:(id)arg1 chunks:(id)arg2 time:(id)arg3 sessionStartTime:(id)arg4 ;
-(NSArray *)chunks;
-(id)initWithSignatureData:(id)arg1 length:(double)arg2 time:(id)arg3 ;
@end

