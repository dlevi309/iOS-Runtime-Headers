/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class TSPFieldTreeNodeWithChildren;

@interface TSPFieldTree : NSObject {

	TSPFieldTreeNodeWithChildren* _rootNode;

}
-(id)init;
-(BOOL)addField:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToMessage:(Message*)arg1 ;
@end

