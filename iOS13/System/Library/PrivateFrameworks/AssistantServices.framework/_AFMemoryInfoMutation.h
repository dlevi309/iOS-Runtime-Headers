/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMemoryInfoMutating.h>

@class AFMemoryInfo, NSString;

@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating> {

	AFMemoryInfo* _baseModel;
	unsigned long long _virtualMemorySizeInBytes;
	int _numberOfRegions;
	int _pageSizeInBytes;
	unsigned long long _residentMemorySizeInBytes;
	unsigned long long _peakResidentMemorySizeInBytes;
	unsigned long long _physicalMemoryFootprintInBytes;
	struct {
		unsigned isDirty : 1;
		unsigned hasVirtualMemorySizeInBytes : 1;
		unsigned hasNumberOfRegions : 1;
		unsigned hasPageSizeInBytes : 1;
		unsigned hasResidentMemorySizeInBytes : 1;
		unsigned hasPeakResidentMemorySizeInBytes : 1;
		unsigned hasPhysicalMemoryFootprintInBytes : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setVirtualMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setNumberOfRegions:(int)arg1 ;
-(void)setPageSizeInBytes:(int)arg1 ;
-(void)setResidentMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1 ;
@end

