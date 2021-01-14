/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
*/


@class NSString, NSArray, PAConfiguration;

@interface PAEnrollmentNode : NSObject {

	BOOL _selected;
	BOOL _hideVisualizer;
	NSString* _name;
	unsigned long long _index;
	unsigned long long _totalSteps;
	unsigned long long _section;
	unsigned long long _type;
	NSArray* _options;
	NSArray* _stimuli;
	NSString* _heading;
	NSString* _instructions;
	PAConfiguration* _configuration;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long index;                     //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned long long totalSteps;                //@synthesize totalSteps=_totalSteps - In the implementation block
@property (assign,nonatomic) unsigned long long section;                   //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL hideVisualizer;                          //@synthesize hideVisualizer=_hideVisualizer - In the implementation block
@property (nonatomic,retain) NSArray * options;                            //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSArray * stimuli;                            //@synthesize stimuli=_stimuli - In the implementation block
@property (nonatomic,retain) NSString * heading;                           //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) NSString * instructions;                      //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) PAConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)nodeWithSection:(unsigned long long)arg1 type:(unsigned long long)arg2 andConfiguration:(id)arg3 ;
+(id)nodeWithSection:(unsigned long long)arg1 andType:(unsigned long long)arg2 comparing:(unsigned long long)arg3 with:(unsigned long long)arg4 ;
-(NSString *)heading;
-(unsigned long long)index;
-(void)setSection:(unsigned long long)arg1 ;
-(NSString *)instructions;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)section;
-(BOOL)isSelected;
-(NSArray *)options;
-(void)setType:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(NSString *)name;
-(void)setInstructions:(NSString *)arg1 ;
-(id)description;
-(PAConfiguration *)configuration;
-(id)key;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)stimuli;
-(void)setHeading:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(PAConfiguration *)arg1 ;
-(void)setTotalSteps:(unsigned long long)arg1 ;
-(unsigned long long)totalSteps;
-(void)setStimuli:(NSArray *)arg1 ;
-(id)progressDescription;
-(BOOL)hideVisualizer;
-(void)setHideVisualizer:(BOOL)arg1 ;
@end

