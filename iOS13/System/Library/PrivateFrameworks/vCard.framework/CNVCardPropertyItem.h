/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class NSString;

@interface CNVCardPropertyItem : NSObject {

	id _value;
	NSString* _label;
	NSString* _identifier;

}

@property (readonly) id value;                           //@synthesize value=_value - In the implementation block
@property (readonly) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)itemWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
-(id)description;
-(NSString *)identifier;
-(id)value;
-(NSString *)label;
-(id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
@end

