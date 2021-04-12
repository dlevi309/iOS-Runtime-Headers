/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@interface VSRecognitionResult : NSObject
+(void)initialize;
+(id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3 ;
-(id)init;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(id)description;
-(id)modelIdentifier;
-(long long)elementCount;
-(BOOL)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(long long)arg3 ;
-(id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2 ;
-(id)valueOfFirstElementWithClassIdentifier:(id)arg1 ;
-(id)createHandler;
-(void)setRecognitionAction:(id)arg1 ;
-(id)recognitionAction;
@end

