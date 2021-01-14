/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFConversationStorable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFMutableConversationItem, NSString;

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying> {

	AFMutableConversationItem* _delegateItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)presentationState;
-(BOOL)isTransient;
-(id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(BOOL)arg8 transient:(BOOL)arg9 supplemental:(BOOL)arg10 immersiveExperience:(BOOL)arg11 associatedDataStore:(id)arg12 ;
-(id)revisionIdentifier;
-(id)initWithDelegateItem:(id)arg1 ;
-(BOOL)isVirgin;
-(id)dialogPhase;
-(NSString *)description;
-(id)aceCommandIdentifier;
-(BOOL)isSupplemental;
-(BOOL)isImmersiveExperience;
-(id)associatedDataStore;
-(id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(BOOL)arg6 transient:(BOOL)arg7 supplemental:(BOOL)arg8 immersiveExperience:(BOOL)arg9 associatedDataStore:(id)arg10 ;
-(long long)type;
-(id)identifier;
-(id)aceObject;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

