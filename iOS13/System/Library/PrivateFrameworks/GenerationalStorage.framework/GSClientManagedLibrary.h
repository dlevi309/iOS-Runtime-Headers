/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/

#import <libobjc.A.dylib/GSLibraryProtocol.h>

@class NSString, GSTemporaryStorage;

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {

	GSTemporaryStorage* _ts;

}

@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage; 
@property (nonatomic,readonly) NSString * nameSpace; 
-(NSObject*<GSAdditionStoring>)storage;
-(NSString *)nameSpace;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)generationsRemove:(id)arg1 error:(id*)arg2 ;
@end

