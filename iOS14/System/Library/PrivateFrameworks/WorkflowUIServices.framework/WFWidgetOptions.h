/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/


@class INIntent, NSNumber;

@interface WFWidgetOptions : NSObject {

	INIntent* _intent;
	unsigned long long _sizeClass;
	NSNumber* _cornerRadius;

}

@property (nonatomic,copy) INIntent * intent;                           //@synthesize intent=_intent - In the implementation block
@property (assign,nonatomic) unsigned long long sizeClass;              //@synthesize sizeClass=_sizeClass - In the implementation block
@property (nonatomic,retain) NSNumber * cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(INIntent *)intent;
-(void)setSizeClass:(unsigned long long)arg1 ;
-(void)setIntent:(INIntent *)arg1 ;
-(NSNumber *)cornerRadius;
-(unsigned long long)sizeClass;
-(void)setCornerRadius:(NSNumber *)arg1 ;
@end

