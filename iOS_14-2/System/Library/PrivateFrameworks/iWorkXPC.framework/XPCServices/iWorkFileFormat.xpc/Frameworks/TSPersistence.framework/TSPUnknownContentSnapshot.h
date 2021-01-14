/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPKnownFieldRuleProvider.h>

@class NSArray, NSString;

@interface TSPUnknownContentSnapshot : NSObject <TSPKnownFieldRuleProvider> {

	NSArray* _preserveFields;
	NSArray* _preserveUntilModifiedFields;
	BOOL _shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration;
	NSArray* _messages;

}

@property (nonatomic,readonly) NSArray * messages;                  //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) BOOL isContentUnknown; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)messages;
-(void)saveToArchiver:(id)arg1 ;
-(id)newUnknownContentSnapshotWithMessages:(id)arg1 ;
-(void)updateMessageInfo:(MessageInfo*)arg1 ;
-(BOOL)isContentUnknown;
-(void)enumerateKnownFieldRulesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithMessages:(id)arg1 preserveFields:(id)arg2 preserveUntilModifiedFields:(id)arg3 shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration:(BOOL)arg4 ;
-(id)newFieldTree;
@end

