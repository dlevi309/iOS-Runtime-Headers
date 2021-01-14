/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/


@protocol ICSWriting
@required
-(id)ICSStringWithOptions:(unsigned long long)arg1;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
-(id)parametersToIncludeForChecksumVersion:(int)arg1;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;

@end

