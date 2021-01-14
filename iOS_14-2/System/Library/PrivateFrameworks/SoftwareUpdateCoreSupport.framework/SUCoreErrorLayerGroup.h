/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@class NSString, NSDictionary;

@interface SUCoreErrorLayerGroup : NSObject {

	long long _errorLayer;
	NSString* _domain;
	long long _minCode;
	long long _maxCode;
	long long _indications;
	NSString* _keyMatchTrue;
	NSDictionary* _keyMatchTrueMap;

}

@property (nonatomic,readonly) long long errorLayer;                      //@synthesize errorLayer=_errorLayer - In the implementation block
@property (nonatomic,retain,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) long long minCode;                         //@synthesize minCode=_minCode - In the implementation block
@property (nonatomic,readonly) long long maxCode;                         //@synthesize maxCode=_maxCode - In the implementation block
@property (assign,nonatomic) long long indications;                       //@synthesize indications=_indications - In the implementation block
@property (nonatomic,retain) NSString * keyMatchTrue;                     //@synthesize keyMatchTrue=_keyMatchTrue - In the implementation block
@property (nonatomic,retain) NSDictionary * keyMatchTrueMap;              //@synthesize keyMatchTrueMap=_keyMatchTrueMap - In the implementation block
-(NSString *)domain;
-(id)description;
-(id)summary;
-(long long)minCode;
-(long long)maxCode;
-(long long)indications;
-(NSString *)keyMatchTrue;
-(NSDictionary *)keyMatchTrueMap;
-(void)setIndications:(long long)arg1 ;
-(void)setKeyMatchTrue:(NSString *)arg1 ;
-(void)setKeyMatchTrueMap:(NSDictionary *)arg1 ;
-(id)initForLayer:(long long)arg1 withDomain:(id)arg2 minCode:(long long)arg3 maxCode:(long long)arg4 indicating:(long long)arg5 ifKeyTrue:(id)arg6 keyMatchTrueMap:(id)arg7 ;
-(long long)errorLayer;
-(id)initForLayer:(long long)arg1 withDomain:(id)arg2 ;
-(id)initForLayer:(long long)arg1 withDomain:(id)arg2 minCode:(long long)arg3 maxCode:(long long)arg4 ;
@end

