/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)sigType;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)sigGenTs;
-(id)initWithSignalType:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(void)setSigGenTs:(unsigned long long)arg1 ;
-(id)stringForLogging;
-(void)setSigType:(unsigned long long)arg1 ;
@end

