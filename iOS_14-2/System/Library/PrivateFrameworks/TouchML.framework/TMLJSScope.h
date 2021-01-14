/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSMutableSet;

@interface TMLJSScope : NSObject {

	int _type;
	NSMutableSet* _vars;

}

@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableSet * vars;              //@synthesize vars=_vars - In the implementation block
-(NSMutableSet *)vars;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)addVar:(id)arg1 ;
-(void)setVars:(NSMutableSet *)arg1 ;
@end

