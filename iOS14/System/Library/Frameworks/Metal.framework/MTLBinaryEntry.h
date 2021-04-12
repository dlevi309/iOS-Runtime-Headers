/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol OS_dispatch_data;
@class NSObject, NSArray;

@interface MTLBinaryEntry : NSObject {

	NSObject*<OS_dispatch_data> _data;
	NSArray* _importedLibraries;
	NSArray* _importedSymbols;

}

@property (readonly) NSObject*<OS_dispatch_data> data;              //@synthesize data=_data - In the implementation block
@property (readonly) NSArray * importedSymbols;                     //@synthesize importedSymbols=_importedSymbols - In the implementation block
@property (readonly) NSArray * importedLibraries;                   //@synthesize importedLibraries=_importedLibraries - In the implementation block
-(id)description;
-(NSObject*<OS_dispatch_data>)data;
-(id)initWithData:(id)arg1 importedSymbols:(id)arg2 importedLibraries:(id)arg3 ;
-(NSArray *)importedSymbols;
-(NSArray *)importedLibraries;
-(void)dealloc;
@end

