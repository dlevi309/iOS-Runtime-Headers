/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface NviSignalData : NSObject <NSCoding> {

	unsigned long long _sigType;
	unsigned long long _sigGenTs;

}

@property (assign,nonatomic) unsigned long long sigType;               //@synthesize sigType=_sigType - In the implementation block
@property (assign,nonatomic) unsigned long long sigGenTs;              //@synthesize sigGenTs=_sigGenTs - In the implementation block
+(id)headerString;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSignalType:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)setSigGenTs:(unsigned long long)arg1 ;
-(id)stringForLogging;
-(unsigned long long)sigType;
-(unsigned long long)sigGenTs;
-(void)setSigType:(unsigned long long)arg1 ;
@end

