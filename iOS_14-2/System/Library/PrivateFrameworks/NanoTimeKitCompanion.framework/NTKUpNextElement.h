/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class REElement, NSString;

@interface NTKUpNextElement : NSObject {

	REElement* _element;
	NSString* _elementIdentifier;

}

@property (nonatomic,readonly) NSString * elementIdentifier;              //@synthesize elementIdentifier=_elementIdentifier - In the implementation block
@property (nonatomic,retain) REElement * element;                         //@synthesize element=_element - In the implementation block
+(id)elementWithREElement:(id)arg1 ;
-(REElement *)element;
-(void)setElement:(REElement *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)elementIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithREElement:(id)arg1 ;
@end

