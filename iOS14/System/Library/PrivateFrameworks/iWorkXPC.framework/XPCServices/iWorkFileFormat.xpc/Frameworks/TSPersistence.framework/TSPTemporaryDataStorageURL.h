/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <CoreFoundation/NSURL.h>

@class TSUTemporaryDirectory;

@interface TSPTemporaryDataStorageURL : NSURL {

	TSUTemporaryDirectory* _parentDirectory;

}

@property (nonatomic,readonly) TSUTemporaryDirectory * parentDirectory;              //@synthesize parentDirectory=_parentDirectory - In the implementation block
-(TSUTemporaryDirectory *)parentDirectory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initFileURLWithPath:(id)arg1 parentDirectory:(id)arg2 ;
@end

