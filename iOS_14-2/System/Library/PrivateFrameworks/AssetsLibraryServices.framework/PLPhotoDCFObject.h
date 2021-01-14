/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString;

@interface PLPhotoDCFObject : NSObject {

	NSString* _name;
	int _number;

}
+(id)validDCFNameForName:(id)arg1 requiredLength:(int)arg2 nameLength:(int)arg3 number:(int*)arg4 numberRange:(NSRange)arg5 suffix:(id)arg6 ;
-(long long)compare:(id)arg1 ;
-(int)number;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(id)name;
-(id)description;
-(id)initWithName:(id)arg1 number:(int)arg2 ;
@end

