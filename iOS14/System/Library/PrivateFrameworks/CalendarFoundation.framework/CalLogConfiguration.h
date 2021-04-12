/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSString, NSMutableArray;

@interface CalLogConfiguration : NSObject {

	NSString* _name;
	NSMutableArray* _nodes;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * nodes;              //@synthesize nodes=_nodes - In the implementation block
-(id)init;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(void)parseConfigurationDefinition:(id)arg1 ;
-(id)parseNodeDefinition:(id)arg1 ;
-(id)parseWriterDefinition:(id)arg1 ;
-(id)parseFilterDefinition:(id)arg1 ;
-(id)initWithDetailedDefinition:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)initWithSimpleDefinition:(id)arg1 ;
-(NSMutableArray *)nodes;
@end

