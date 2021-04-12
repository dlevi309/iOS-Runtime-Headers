/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
*/

typedef struct _compressed_pair<hvf::Renderer *, std::__1::default_delete<hvf::Renderer> > {
	Renderer __value_;
} compressed_pair<hvf::Renderer *, std::__1::default_delete<hvf::Renderer> >;

typedef struct unique_ptr<hvf::Renderer, std::__1::default_delete<hvf::Renderer> > {
	compressed_pair<hvf::Renderer *, std::__1::default_delete<hvf::Renderer> > __ptr_;
} unique_ptr<hvf::Renderer, std::__1::default_delete<hvf::Renderer> >;

typedef struct {
	double dx;
	double dy;
} SCD_Struct_HV2;

typedef struct NestedSubparts {
	unsigned long long count;
	tuple<unsigned long, hvf::PartTransform> values;
} NestedSubparts;

typedef struct AxisValues {
	unsigned long long count;
	tuple<unsigned long, double> values;
} AxisValues;

typedef struct PartTransform {
	SCD_Struct_HV2 translation;
	double rotation;
	AxisValues axisValues;
	NestedSubparts nestedSubparts;
} PartTransform;

typedef struct _compressed_pair<std::__1::tuple<unsigned long, double> *, std::__1::allocator<std::__1::tuple<unsigned long, double> > > {
	tuple<unsigned long, double> __value_;
} compressed_pair<std::__1::tuple<unsigned long, double> *, std::__1::allocator<std::__1::tuple<unsigned long, double> > >;

typedef struct vector<std::__1::tuple<unsigned long, double>, std::__1::allocator<std::__1::tuple<unsigned long, double> > > {
	tuple<unsigned long, double> __begin_;
	tuple<unsigned long, double> __end_;
	compressed_pair<std::__1::tuple<unsigned long, double> *, std::__1::allocator<std::__1::tuple<unsigned long, double> > > __end_cap_;
} vector<std::__1::tuple<unsigned long, double>, std::__1::allocator<std::__1::tuple<unsigned long, double> > >;

