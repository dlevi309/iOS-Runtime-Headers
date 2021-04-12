/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString, HFStateDumpBuilderContext;

@interface HFStateDumpEntry : NSObject {

	NSString* _name;
	id _object;
	unsigned long long _options;
	HFStateDumpBuilderContext* _context;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id object;                                      //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) HFStateDumpBuilderContext * context;              //@synthesize context=_context - In the implementation block
-(NSString *)name;
-(id)object;
-(unsigned long long)options;
-(void)setObject:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(HFStateDumpBuilderContext *)context;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setContext:(HFStateDumpBuilderContext *)arg1 ;
@end

