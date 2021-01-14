/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPDataAttributes : NSObject <NSCopying>
+(id)_classRegistry;
+(void)registerDataAttributesClass:(Class)arg1 forExtensionNumber:(int)arg2 ;
+(id)newDataAttributesWithMessage:(const DataAttributes*)arg1 ;
-(id)initWithMessage:(const DataAttributes*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToMessage:(DataAttributes*)arg1 ;
@end

