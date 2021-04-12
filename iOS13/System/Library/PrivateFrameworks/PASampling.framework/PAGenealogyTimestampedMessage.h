/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@class NSString;

@interface PAGenealogyTimestampedMessage : NSObject {

	double _machTime;
	unsigned long long _activityId;

}

@property (readonly) double machTime;                            //@synthesize machTime=_machTime - In the implementation block
@property (readonly) unsigned long long activityId;              //@synthesize activityId=_activityId - In the implementation block
@property (readonly) NSString * message; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)message;
-(double)machTime;
-(unsigned long long)activityId;
-(id)initWithActivityId:(unsigned long long)arg1 atMachTime:(double)arg2 ;
-(long long)compareToOtherMessage:(id)arg1 ;
@end

