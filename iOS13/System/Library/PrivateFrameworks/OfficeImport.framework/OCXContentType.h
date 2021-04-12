/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)path;
-(NSString *)contentType;
-(BOOL)isOverride;
-(void)writeToStreamWriter:(id)arg1 ;
-(id)initWithContentType:(id)arg1 path:(id)arg2 ;
-(id)initWithContentType:(id)arg1 extension:(id)arg2 ;
@end

