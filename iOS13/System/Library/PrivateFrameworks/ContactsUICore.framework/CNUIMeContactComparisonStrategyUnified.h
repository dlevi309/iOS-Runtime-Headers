/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNMeContactComparisonStrategy.h>

@class NSSet, NSString;

@interface CNUIMeContactComparisonStrategyUnified : NSObject <CNMeContactComparisonStrategy> {

	NSSet* _meContactIdentifiersFound;

}

@property (nonatomic,retain) NSSet * meContactIdentifiersFound;              //@synthesize meContactIdentifiersFound=_meContactIdentifiersFound - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMeContact:(id)arg1 ;
-(id)meContactIdentifiers;
-(void)meContactChangedInStore:(id)arg1 ;
-(id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)arg1 ;
-(void)setMeContactIdentifiersFound:(NSSet *)arg1 ;
-(NSSet *)meContactIdentifiersFound;
@end

