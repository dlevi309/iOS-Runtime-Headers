/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface HKSPXPCMessage : NSObject <BSDescriptionProviding> {

	NSString* _identifier;
	/*^block*/id _block;
	unsigned long long _options;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id errorHandler;                    //@synthesize errorHandler=_errorHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)errorHandler;
-(id)block;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)options;
-(NSString *)description;
-(id)initWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

