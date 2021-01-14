/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@interface VSRecognitionResult : NSObject
+(void)initialize;
+(id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3 ;
-(oneway void)release;
-(id)init;
-(id)retain;
-(id)description;
-(long long)elementCount;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(BOOL)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(long long)arg3 ;
-(id)createHandler;
-(id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2 ;
-(id)valueOfFirstElementWithClassIdentifier:(id)arg1 ;
-(void)setRecognitionAction:(id)arg1 ;
-(id)recognitionAction;
-(id)modelIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

