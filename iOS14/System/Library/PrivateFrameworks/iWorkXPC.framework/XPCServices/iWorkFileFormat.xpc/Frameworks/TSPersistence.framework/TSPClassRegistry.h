/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class NSString, NSMutableDictionary;

@interface TSPClassRegistry : NSObject {

	NSString* _name;
	NSMutableDictionary* _registry;
	BOOL _didFinishRegistration;

}
-(id)init;
-(id)initWithName:(id)arg1 ;
-(void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2 ;
-(Class)classForMessage:(const Message*)arg1 ;
-(Class)p_classForExtensionNumber:(int)arg1 ;
-(Class)classForExtensionNumber:(int)arg1 ;
@end

