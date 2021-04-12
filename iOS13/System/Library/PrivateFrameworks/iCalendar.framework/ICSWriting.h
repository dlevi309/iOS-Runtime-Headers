/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

