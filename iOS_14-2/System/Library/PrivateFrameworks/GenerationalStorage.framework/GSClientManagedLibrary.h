/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/

#import <libobjc.A.dylib/GSLibraryProtocol.h>

@class NSString, GSTemporaryStorage;

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {

	GSTemporaryStorage* _ts;

}

@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage; 
@property (nonatomic,readonly) NSString * nameSpace; 
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(NSObject*<GSAdditionStoring>)storage;
-(NSString *)nameSpace;
-(BOOL)generationsRemove:(id)arg1 error:(id*)arg2 ;
@end

