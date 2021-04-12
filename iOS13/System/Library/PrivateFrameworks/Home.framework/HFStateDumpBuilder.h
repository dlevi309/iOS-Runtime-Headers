/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFStateDumpBuilderContext, NSMutableArray;

@interface HFStateDumpBuilder : NSObject {

	id _object;
	HFStateDumpBuilderContext* _context;
	NSMutableArray* _entries;

}

@property (nonatomic,readonly) NSMutableArray * entries;                         //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) id object;                                        //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) HFStateDumpBuilderContext * context;              //@synthesize context=_context - In the implementation block
+(id)builderWithObject:(id)arg1 context:(id)arg2 ;
+(id)_coerceObjectToPropertyList:(id)arg1 options:(unsigned long long)arg2 ;
-(id)object;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(HFStateDumpBuilderContext *)context;
-(void)appendObject:(id)arg1 withName:(id)arg2 ;
-(void)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3 ;
-(void)appendBool:(BOOL)arg1 withName:(id)arg2 ;
-(NSMutableArray *)entries;
-(id)buildPropertyListRepresentation;
-(id)buildDescription;
-(void)appendObject:(id)arg1 withName:(id)arg2 options:(unsigned long long)arg3 ;
-(void)appendObject:(id)arg1 withName:(id)arg2 context:(id)arg3 ;
-(void)appendObject:(id)arg1 withName:(id)arg2 context:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithObject:(id)arg1 context:(id)arg2 ;
-(id)_filteredEntries;
-(id)_formattedObjectForEntry:(id)arg1 withRepresentation:(unsigned long long)arg2 ;
-(id)_formattedObjectForObject:(id)arg1 withRepresentation:(unsigned long long)arg2 context:(id)arg3 options:(unsigned long long)arg4 ;
@end

