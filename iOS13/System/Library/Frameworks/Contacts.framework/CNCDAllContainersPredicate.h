/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)cn_coreDataPredicate;
-(id)cn_topLevelFilter;
-(id)cn_persistenceFilterRequest;
-(id)initWithIncludeDisabledContainers:(BOOL)arg1 ;
-(BOOL)includeDisabledContainers;
-(void)setIncludeDisabledContainers:(BOOL)arg1 ;
@end

