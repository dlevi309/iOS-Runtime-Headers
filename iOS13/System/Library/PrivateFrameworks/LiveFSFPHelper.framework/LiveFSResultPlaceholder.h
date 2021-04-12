/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/


@class NSString, NSNumber, NSDictionary;

@interface LiveFSResultPlaceholder : NSObject {

	NSString* _path;
	NSString* _filename;
	NSNumber* _modTime;
	NSDictionary* _xattrs;

}

@property (retain) NSString * path;                    //@synthesize path=_path - In the implementation block
@property (retain) NSString * filename;                //@synthesize filename=_filename - In the implementation block
@property (retain) NSNumber * modTime;                 //@synthesize modTime=_modTime - In the implementation block
@property (retain) NSDictionary * xattrs;              //@synthesize xattrs=_xattrs - In the implementation block
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setModTime:(NSNumber *)arg1 ;
-(NSNumber *)modTime;
-(NSDictionary *)xattrs;
-(void)setXattrs:(NSDictionary *)arg1 ;
@end

