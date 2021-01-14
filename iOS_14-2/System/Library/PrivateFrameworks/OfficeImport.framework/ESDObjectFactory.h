/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

