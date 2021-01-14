/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPObject.h>

@class TSUColor;

@interface TSPDataMetadata : TSPObject {

	TSUColor* _fallbackColor;

}

@property (nonatomic,copy) TSUColor * fallbackColor;              //@synthesize fallbackColor=_fallbackColor - In the implementation block
-(void)setFallbackColor:(TSUColor *)arg1 ;
-(TSUColor *)fallbackColor;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToMessage:(DataMetadata*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const DataMetadata*)arg1 unarchiver:(id)arg2 ;
@end

