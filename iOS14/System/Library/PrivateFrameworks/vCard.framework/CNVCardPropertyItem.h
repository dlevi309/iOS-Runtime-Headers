/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)label;
-(id)value;
-(id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
@end

