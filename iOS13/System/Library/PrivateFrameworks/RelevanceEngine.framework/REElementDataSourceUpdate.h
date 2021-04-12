/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(REElement *)element;
-(NSString *)section;
-(id)initWithElement:(id)arg1 section:(id)arg2 updateType:(unsigned long long)arg3 ;
@end

