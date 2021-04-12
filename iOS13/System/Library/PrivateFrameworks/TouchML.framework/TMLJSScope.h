/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSMutableSet;

@interface TMLJSScope : NSObject {

	int _type;
	NSMutableSet* _vars;

}

@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableSet * vars;              //@synthesize vars=_vars - In the implementation block
-(int)type;
-(void)setType:(int)arg1 ;
-(void)addVar:(id)arg1 ;
-(NSMutableSet *)vars;
-(void)setVars:(NSMutableSet *)arg1 ;
@end

