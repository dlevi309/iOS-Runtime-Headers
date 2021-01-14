/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REElement, NSString;

@interface REElementDataSourceUpdate : NSObject {

	REElement* _element;
	unsigned long long _type;
	NSString* _section;

}

@property (nonatomic,readonly) REElement * element;                  //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * section;                   //@synthesize section=_section - In the implementation block
+(id)reloadElement:(id)arg1 inSection:(id)arg2 ;
+(id)insertElement:(id)arg1 inSection:(id)arg2 ;
+(id)removeElement:(id)arg1 inSection:(id)arg2 ;
+(id)refreshElement:(id)arg1 inSection:(id)arg2 ;
-(REElement *)element;
-(NSString *)section;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithElement:(id)arg1 section:(id)arg2 updateType:(unsigned long long)arg3 ;
@end

