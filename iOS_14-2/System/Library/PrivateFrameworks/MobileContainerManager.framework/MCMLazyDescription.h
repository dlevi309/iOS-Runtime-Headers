/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
*/

#import <MobileContainerManager/MobileContainerManager-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface MCMLazyDescription : NSString {

	/*^block*/id _block;
	NSString* _value;

}
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)description;
-(id)redactedDescription;
-(id)initWithDescriber:(/*^block*/id)arg1 ;
@end

