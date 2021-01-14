/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/MFMessageCriterionConverterDelegate.h>

@class MFMessageCriterionConverter, EDMessagePersistence, NSString;

@interface MFMailMessageLibraryQueryTransformer : NSObject <EFLoggable, MFMessageCriterionConverterDelegate> {

	MFMessageCriterionConverter* _criterionConverter;
	EDMessagePersistence* _messagePersistence;

}

@property (nonatomic,retain) MFMessageCriterionConverter * criterionConverter;                //@synthesize criterionConverter=_criterionConverter - In the implementation block
@property (nonatomic,__weak,readonly) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)initWithMessagePersistence:(id)arg1 ;
-(EDMessagePersistence *)messagePersistence;
-(void)setCriterionConverter:(MFMessageCriterionConverter *)arg1 ;
-(MFMessageCriterionConverter *)criterionConverter;
-(id)messageCriterionConverter:(id)arg1 expressionForConstantValue:(id)arg2 withCriterionType:(long long)arg3 ;
-(id)criterionForQuery:(id)arg1 ;
-(unsigned)optionsForQuery:(id)arg1 ;
-(id)mailAccountForIdentifier:(id)arg1 ;
-(long long)messageCriterionConverter:(id)arg1 criterionTypeForKey:(id)arg2 ;
@end

