/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface ESDObjectFactory : NSObject {

	EshObjectFactory* eshObjectFactory;
	NSMutableArray* eshObjectFactoryStack;

}
+(id)threadLocalFactory;
-(id)init;
-(void)dealloc;
-(EshObject*)createObjectWithType:(unsigned short)arg1 ;
-(EshObject*)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2 ;
-(void)replaceHostEshFactoryWith:(EshObjectFactory*)arg1 ;
-(void)restoreHostEshFactory;
-(void)setEshFactory:(EshObjectFactory*)arg1 ;
@end

