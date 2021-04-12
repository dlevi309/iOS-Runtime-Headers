/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/MiroColorConfiguration.h>
#import <libobjc.A.dylib/MiroTitleColorConfiguration.h>

@protocol MiroTitleColorConfiguration <NSObject>
@property (nonatomic,readonly) unsigned long long titleColorTreatment; 
@property (nonatomic,readonly) unsigned long long subtitleColorTreatment; 
@property (nonatomic,readonly) unsigned long long backgroundShapeColorTreatment; 
@property (nonatomic,readonly) BOOL titleStyleHasColorRigging; 
@property (nonatomic,readonly) BOOL titleStyleHasStrap; 
@property (nonatomic,readonly) BOOL titleStyleIsCentered; 
@property (nonatomic,readonly) BOOL titleStyleIsLowerThird; 
@property (nonatomic,readonly) BOOL titleStyleIsSideBySide; 
@required
-(BOOL)titleStyleIsLowerThird;
-(BOOL)titleStyleIsCentered;
-(BOOL)titleStyleIsSideBySide;
-(unsigned long long)titleColorTreatment;
-(unsigned long long)subtitleColorTreatment;
-(unsigned long long)backgroundShapeColorTreatment;
-(BOOL)titleStyleHasColorRigging;
-(BOOL)titleStyleHasStrap;

@end


@class NSDictionary, NSString;

@interface MiroTitleColorConfiguration : MiroColorConfiguration <MiroTitleColorConfiguration> {

	int _snapshotAspect;
	NSDictionary* _titleParameters;
	NSString* _debugTitleName;

}

@property (assign,nonatomic) int snapshotAspect;                                              //@synthesize snapshotAspect=_snapshotAspect - In the implementation block
@property (nonatomic,retain) NSDictionary * titleParameters;                                  //@synthesize titleParameters=_titleParameters - In the implementation block
@property (nonatomic,retain) NSString * debugTitleName;                                       //@synthesize debugTitleName=_debugTitleName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long titleColorTreatment; 
@property (nonatomic,readonly) unsigned long long subtitleColorTreatment; 
@property (nonatomic,readonly) unsigned long long backgroundShapeColorTreatment; 
@property (nonatomic,readonly) BOOL titleStyleHasColorRigging; 
@property (nonatomic,readonly) BOOL titleStyleHasStrap; 
@property (nonatomic,readonly) BOOL titleStyleIsCentered; 
@property (nonatomic,readonly) BOOL titleStyleIsLowerThird; 
@property (nonatomic,readonly) BOOL titleStyleIsSideBySide; 
+(void)initialize;
+(id)titleColorConfigurationWithTitleStyleID:(id)arg1 snapshotAspect:(int)arg2 randomizerSeed:(unsigned)arg3 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(BOOL)titleStyleIsLowerThird;
-(BOOL)titleStyleIsCentered;
-(BOOL)titleStyleIsSideBySide;
-(id)initWithTitleStyleID:(id)arg1 randomizerSeed:(unsigned)arg2 ;
-(void)setSnapshotAspect:(int)arg1 ;
-(NSDictionary *)titleParameters;
-(BOOL)_verifyTitleStylesAreCorrect:(id)arg1 ;
-(NSString *)debugTitleName;
-(void)setTitleParameters:(NSDictionary *)arg1 ;
-(void)setDebugTitleName:(NSString *)arg1 ;
-(int)snapshotAspect;
-(unsigned long long)titleColorTreatment;
-(unsigned long long)subtitleColorTreatment;
-(unsigned long long)backgroundShapeColorTreatment;
-(BOOL)titleStyleHasColorRigging;
-(BOOL)titleStyleHasStrap;
@end

