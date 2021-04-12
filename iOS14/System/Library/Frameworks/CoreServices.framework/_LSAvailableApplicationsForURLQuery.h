/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQuery.h>

@class NSURL;

@interface _LSAvailableApplicationsForURLQuery : _LSQuery {

	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)yieldBundles:(const vector<unsigned int, std::__1::allocator<unsigned int> >*)arg1 context:(LSContext*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSURL *)URL;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(id)initWithCoder:(id)arg1 ;
@end

