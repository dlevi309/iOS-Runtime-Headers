/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface OCXContentType : NSObject {

	NSString* mContentType;
	NSString* mPath;
	NSString* mExtension;

}

@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * path; 
-(NSString *)contentType;
-(NSString *)path;
-(BOOL)isOverride;
-(void)writeToStreamWriter:(id)arg1 ;
-(id)initWithContentType:(id)arg1 path:(id)arg2 ;
-(id)initWithContentType:(id)arg1 extension:(id)arg2 ;
@end

