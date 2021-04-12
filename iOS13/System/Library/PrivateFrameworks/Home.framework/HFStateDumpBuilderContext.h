/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSDictionary, NSString;

@interface HFStateDumpBuilderContext : NSObject <NSCopying, NSMutableCopying> {

	BOOL _excludePrimaryID;
	unsigned long long _detailLevel;
	unsigned long long _outputStyle;
	NSSet* _objectsToExclude;
	NSDictionary* _userInfo;
	NSString* _multilinePrefix;

}

@property (assign,nonatomic) unsigned long long detailLevel;              //@synthesize detailLevel=_detailLevel - In the implementation block
@property (assign,nonatomic) unsigned long long outputStyle;              //@synthesize outputStyle=_outputStyle - In the implementation block
@property (nonatomic,copy) NSSet * objectsToExclude;                      //@synthesize objectsToExclude=_objectsToExclude - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * multilinePrefix;                    //@synthesize multilinePrefix=_multilinePrefix - In the implementation block
@property (assign,nonatomic) BOOL excludePrimaryID;                       //@synthesize excludePrimaryID=_excludePrimaryID - In the implementation block
+(id)contextWithDetailLevel:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)detailLevel;
-(id)copyWithDetailLevel:(unsigned long long)arg1 ;
-(id)copyWithOutputStyle:(unsigned long long)arg1 ;
-(NSSet *)objectsToExclude;
-(unsigned long long)derivedOutputStyle;
-(NSString *)multilinePrefix;
-(void)setObjectsToExclude:(NSSet *)arg1 ;
-(void)setMultilinePrefix:(NSString *)arg1 ;
-(BOOL)excludePrimaryID;
-(id)initWithDetailLevel:(unsigned long long)arg1 ;
-(unsigned long long)outputStyle;
-(void)setDetailLevel:(unsigned long long)arg1 ;
-(void)setOutputStyle:(unsigned long long)arg1 ;
-(void)setExcludePrimaryID:(BOOL)arg1 ;
@end

