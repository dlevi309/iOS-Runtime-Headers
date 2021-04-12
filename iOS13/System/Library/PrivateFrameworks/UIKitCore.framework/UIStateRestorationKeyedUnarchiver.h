/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <Foundation/NSKeyedUnarchiver.h>

@class NSDictionary;

@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {

	NSDictionary* _defaultValues;

}
-(void)dealloc;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2 requiresSecureCoding:(BOOL)arg3 ;
@end

