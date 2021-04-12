/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class NSString;

@interface LocationOfInterestType : NSObject {

	NSString* _customLabel;
	long long _labelType;

}

@property (nonatomic,copy) NSString * customLabel;               //@synthesize customLabel=_customLabel - In the implementation block
@property (nonatomic,readonly) long long labelType;              //@synthesize labelType=_labelType - In the implementation block
@property (nonatomic,readonly) NSString * label; 
-(id)debugDescription;
-(NSString *)label;
-(long long)labelType;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(id)initWithContactAddressType:(int)arg1 customLabel:(id)arg2 ;
-(id)initWithLabelType:(long long)arg1 ;
-(id)initWithLabelType:(long long)arg1 customLabel:(id)arg2 ;
@end

