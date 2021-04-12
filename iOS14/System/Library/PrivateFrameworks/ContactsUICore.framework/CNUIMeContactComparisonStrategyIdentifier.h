/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNMeContactComparisonStrategy.h>

@class NSString;

@interface CNUIMeContactComparisonStrategyIdentifier : NSObject <CNMeContactComparisonStrategy> {

	NSString* _meContactIdentifierFound;

}

@property (nonatomic,retain) NSString * meContactIdentifierFound;              //@synthesize meContactIdentifierFound=_meContactIdentifierFound - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMeContact:(id)arg1 ;
-(id)meContactIdentifiers;
-(void)meContactChangedInStore:(id)arg1 ;
-(void)setMeContactIdentifierFound:(NSString *)arg1 ;
-(NSString *)meContactIdentifierFound;
@end

