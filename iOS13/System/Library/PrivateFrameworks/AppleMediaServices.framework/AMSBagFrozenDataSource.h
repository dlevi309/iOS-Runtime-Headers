/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagDataSourceProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, AMSBagKeySet, NSArray, NSDictionary;

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSSecureCoding> {

	NSDate* _expirationDate;
	NSString* _profile;
	NSString* _profileVersion;
	AMSBagKeySet* _bagKeySet;
	NSArray* _cookies;
	NSDictionary* _data;

}

@property (nonatomic,readonly) AMSBagKeySet * bagKeySet;                     //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (nonatomic,readonly) NSArray * cookies;                            //@synthesize cookies=_cookies - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * expirationDate;                      //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) NSString * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileVersion;               //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,copy) id dataSourceChangedHandler; 
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)data;
-(BOOL)isLoaded;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(NSArray *)cookies;
-(AMSBagKeySet *)bagKeySet;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)profileVersion;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2 ;
-(id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6 ;
@end

