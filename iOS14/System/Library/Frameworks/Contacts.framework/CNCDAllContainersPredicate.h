/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNCDContainerPredicate.h>

@class NSString;

@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate> {

	BOOL _includeDisabledContainers;

}

@property (assign,nonatomic) BOOL includeDisabledContainers;              //@synthesize includeDisabledContainers=_includeDisabledContainers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIncludeDisabledContainers:(BOOL)arg1 ;
-(BOOL)includeDisabledContainers;
-(void)setIncludeDisabledContainers:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)cn_coreDataPredicate;
-(id)cn_topLevelFilter;
-(id)cn_persistenceFilterRequest;
@end

