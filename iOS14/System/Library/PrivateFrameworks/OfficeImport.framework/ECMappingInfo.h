/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface ECMappingInfo : NSObject {

	NSString* mSheetName;

}

@property (nonatomic,readonly) NSString * sheetName; 
@property (nonatomic,readonly) int rowOffset; 
@property (nonatomic,readonly) int columnOffset; 
+(id)mappingInfoWithSheetName:(id)arg1 ;
-(int)rowOffset;
-(int)columnOffset;
-(NSString *)sheetName;
-(id)initWithSheetName:(id)arg1 ;
@end

