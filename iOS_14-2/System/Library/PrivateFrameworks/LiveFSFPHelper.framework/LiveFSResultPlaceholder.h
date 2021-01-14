/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)filename;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(NSDictionary *)xattrs;
-(void)setFilename:(NSString *)arg1 ;
-(NSNumber *)modTime;
-(void)setModTime:(NSNumber *)arg1 ;
-(void)setXattrs:(NSDictionary *)arg1 ;
@end

