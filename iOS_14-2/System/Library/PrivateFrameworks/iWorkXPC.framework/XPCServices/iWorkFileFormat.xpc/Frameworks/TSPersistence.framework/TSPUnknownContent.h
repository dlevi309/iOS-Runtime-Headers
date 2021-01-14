/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class NSArray;

@interface TSPUnknownContent : NSObject {

	NSArray* _preserveMessages;
	NSArray* _preserveUntilModifiedMessages;
	NSArray* _preserveFields;
	NSArray* _preserveUntilModifiedFields;

}
+(BOOL)unknownContent:(id)arg1 hasSameUnknownFieldsAsUnknownContent:(id)arg2 messagePrototype:(const Message*)arg3 ;
-(id)init;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)willModifyObject;
-(id)newUnknownContentSnapshot;
-(id)initWithMessages:(id)arg1 messagesAreDiffs:(BOOL)arg2 preserveFields:(id)arg3 preserveUntilModifiedFields:(id)arg4 ;
-(BOOL)hasSameUnknownFieldsAsUnknownContent:(id)arg1 messagePrototype:(const Message*)arg2 ;
@end

